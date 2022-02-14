
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef size_t guint ;
typedef int gchar ;
typedef scalar_t__ gboolean ;
struct TYPE_6__ {scalar_t__ len; char const* str; } ;
typedef TYPE_1__ GString ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 char* VAR_2 ;
 char* VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int * FUNC_1 (char const*,char const*) ;
 int * FUNC_2 (char const*,char const*) ;
 scalar_t__ FUNC_3 (char const*,char const*) ;
 int VAR_6 ;
 int FUNC_4 (char*,int ,char const*,char const*,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (char const*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (TYPE_1__*,int *) ;
 int FUNC_9 (TYPE_1__*,int ) ;
 int FUNC_10 (TYPE_1__*,scalar_t__) ;
 TYPE_1__* FUNC_11 (int *) ;

__attribute__((used)) static int FUNC_12(const char *VAR_7,
  const char *VAR_8, char **VAR_9,
  gboolean VAR_10) {
 const char *VAR_11 = VAR_10 ? VAR_3 : VAR_2;
 int VAR_12 = 0;

 if (VAR_7) {
  if (0 != FUNC_3(VAR_11, VAR_7)) {
   FUNC_4("%s: setting %s = %s failed: %s", VAR_1,
     VAR_11, VAR_7,
     FUNC_7(VAR_6));
   VAR_12 = -1;
  }
 } else if (!FUNC_6(VAR_11)) {
  GString *VAR_13 = FUNC_11(((void*)0));
  guint VAR_14;
  gboolean VAR_15 = VAR_0;
  for (VAR_14 = 0; (VAR_15 && VAR_14 == 0) || (!VAR_15 && VAR_9[VAR_14] != ((void*)0)); VAR_14++) {
   gchar *VAR_16;
   const char *VAR_17 = VAR_15 ? ((void*)0) : VAR_9[VAR_14];

   if (VAR_10) {
    VAR_16 = FUNC_2(VAR_8, VAR_17);
   } else {
    VAR_16 = FUNC_1(VAR_8, VAR_17);
   }

   if (VAR_13->len > 0) {
    FUNC_9(VAR_13, FUNC_0(VAR_4));
   }

   FUNC_8(VAR_13, VAR_16);

   FUNC_5(VAR_16);
  }

  if (VAR_13->len) {
   if (FUNC_3(VAR_11, VAR_13->str)) {
    FUNC_4("%s: setting %s = %s failed: %s", VAR_1,
      VAR_11, VAR_13->str,
      FUNC_7(VAR_6));
    VAR_12 = -1;
   }
  }
  FUNC_10(VAR_13, VAR_5);
 }

 return 0;
}
