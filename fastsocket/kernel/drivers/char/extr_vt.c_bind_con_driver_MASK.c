
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vc_data {int vc_can_do_color; unsigned long vc_origin; int vc_rows; int vc_cols; scalar_t__ vc_screenbuf; TYPE_1__* vc_sw; } ;
struct module {int dummy; } ;
struct consw {struct module* owner; int (* con_startup ) () ;} ;
struct con_driver {char* desc; int flag; int last; int first; struct consw const* con; } ;
struct TYPE_4__ {struct vc_data* d; } ;
struct TYPE_3__ {int (* con_deinit ) (struct vc_data*) ;} ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct vc_data*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct module*) ;
 int FUNC_2 () ;
 int FUNC_3 (struct vc_data*) ;
 struct consw const** VAR_3 ;
 struct consw const* VAR_4 ;
 int FUNC_4 (int,int ) ;
 int FUNC_5 (int,int ) ;
 int FUNC_6 (struct module*) ;
 int FUNC_7 (char*,...) ;
 struct con_driver* VAR_5 ;
 int FUNC_8 () ;
 int FUNC_9 (struct vc_data*) ;
 int FUNC_10 (struct vc_data*) ;
 int FUNC_11 () ;
 int FUNC_12 (struct vc_data*) ;
 int FUNC_13 (struct module*) ;
 int FUNC_14 (struct vc_data*) ;
 int FUNC_15 (struct vc_data*) ;
 TYPE_2__* VAR_6 ;
 int FUNC_16 (struct vc_data*,int,int ) ;

__attribute__((used)) static int FUNC_17(const struct consw *VAR_7, int VAR_8, int VAR_9,
      int VAR_10)
{
 struct module *VAR_11 = VAR_7->owner;
 const char *VAR_12 = ((void*)0);
 struct con_driver *VAR_13;
 int VAR_14, VAR_15 = -1, VAR_16 = -1, VAR_17 = -VAR_1;

 if (!FUNC_13(VAR_11))
  return -VAR_1;

 FUNC_2();


 for (VAR_14 = 0; VAR_14 < VAR_2; VAR_14++) {
  VAR_13 = &VAR_5[VAR_14];

  if (VAR_13->con == VAR_7) {
   VAR_12 = VAR_13->desc;
   VAR_17 = 0;
   break;
  }
 }

 if (VAR_17)
  goto err;

 if (!(VAR_13->flag & VAR_0)) {
  VAR_7->con_startup();
  VAR_13->flag |= VAR_0;
 }

 if (VAR_10) {
  if (VAR_4)
   FUNC_6(VAR_4->owner);

  FUNC_1(VAR_11);
  VAR_4 = VAR_7;
 }

 VAR_8 = FUNC_4(VAR_8, VAR_13->first);
 VAR_9 = FUNC_5(VAR_9, VAR_13->last);

 for (VAR_14 = VAR_8; VAR_14 <= VAR_9; VAR_14++) {
  int VAR_18;
  struct vc_data *VAR_19 = VAR_6[VAR_14].d;

  if (VAR_3[VAR_14])
   FUNC_6(VAR_3[VAR_14]->owner);
  FUNC_1(VAR_11);
  VAR_3[VAR_14] = VAR_7;

  if (!VAR_19 || !VAR_19->vc_sw)
   continue;

  VAR_15 = VAR_14;

  if (FUNC_0(VAR_19)) {
   VAR_16 = VAR_14;
   FUNC_9(VAR_19);
  }

  VAR_18 = VAR_19->vc_can_do_color;
  VAR_19->vc_sw->con_deinit(VAR_19);
  VAR_19->vc_origin = (unsigned long)VAR_19->vc_screenbuf;
  FUNC_16(VAR_19, VAR_14, 0);
  FUNC_10(VAR_19);
  FUNC_14(VAR_19);





  if (VAR_18 != VAR_19->vc_can_do_color)
   FUNC_3(VAR_19);
 }

 FUNC_7("Console: switching ");
 if (!VAR_10)
  FUNC_7("consoles %d-%d ", VAR_8+1, VAR_9+1);
 if (VAR_15 >= 0) {
  struct vc_data *VAR_20 = VAR_6[VAR_15].d;

  FUNC_7("to %s %s %dx%d\n",
         VAR_20->vc_can_do_color ? "colour" : "mono",
         VAR_12, VAR_20->vc_cols, VAR_20->vc_rows);

  if (VAR_16 >= 0) {
   VAR_20 = VAR_6[VAR_16].d;
   FUNC_15(VAR_20);
  }
 } else
  FUNC_7("to %s\n", VAR_12);

 VAR_17 = 0;
err:
 FUNC_8();
 FUNC_6(VAR_11);
 return VAR_17;
}
