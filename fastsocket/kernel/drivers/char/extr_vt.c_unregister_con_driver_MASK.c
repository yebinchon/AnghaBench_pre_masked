
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct consw {int dummy; } ;
struct con_driver {int flag; scalar_t__ last; scalar_t__ first; scalar_t__ node; int * dev; int * desc; struct consw const* con; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,scalar_t__) ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (struct consw const*) ;
 int FUNC_3 (int ,int ) ;
 struct con_driver* VAR_3 ;
 int FUNC_4 () ;
 int VAR_4 ;
 int FUNC_5 (struct con_driver*) ;

int FUNC_6(const struct consw *VAR_5)
{
 int VAR_6, VAR_7 = -VAR_1;

 FUNC_1();


 if (FUNC_2(VAR_5))
  goto err;

 for (VAR_6 = 0; VAR_6 < VAR_2; VAR_6++) {
  struct con_driver *VAR_8 = &VAR_3[VAR_6];

  if (VAR_8->con == VAR_5 &&
      VAR_8->flag & VAR_0) {
   FUNC_5(VAR_8);
   FUNC_3(VAR_4,
           FUNC_0(0, VAR_8->node));
   VAR_8->con = ((void*)0);
   VAR_8->desc = ((void*)0);
   VAR_8->dev = ((void*)0);
   VAR_8->node = 0;
   VAR_8->flag = 0;
   VAR_8->first = 0;
   VAR_8->last = 0;
   VAR_7 = 0;
   break;
  }
 }
err:
 FUNC_4();
 return VAR_7;
}
