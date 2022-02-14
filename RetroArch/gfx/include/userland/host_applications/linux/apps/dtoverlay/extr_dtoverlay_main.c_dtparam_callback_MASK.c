
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dtparam_state {int used_props; scalar_t__ override_value; } ;
typedef int prop_id ;
typedef int DTBLOB_T ;


 int VAR_0 ;
 int FUNC_0 (int,int *,int,char const*,int,int,int,void*) ;
 scalar_t__ FUNC_1 (char*,int,char*,int,char const*) ;
 int FUNC_2 (int ,char*,int ) ;
 scalar_t__ FUNC_3 (int ,char*,int ) ;

int FUNC_4(int VAR_1,
       DTBLOB_T *VAR_2, int VAR_3,
       const char *VAR_4, int VAR_5,
       int VAR_6, int VAR_7,
       void *VAR_8)
{
    struct dtparam_state *VAR_9 = VAR_8;
    char VAR_10[80];
    int VAR_11;

    VAR_11 = FUNC_0(VAR_1,
     VAR_2, VAR_3,
     VAR_4, VAR_5,
     VAR_6, VAR_7,
     (void *)VAR_9->override_value);

    if ((VAR_11 == 0) && (VAR_5 != 0))
    {
 if (FUNC_1(VAR_10, sizeof(VAR_10), "%08x%s", VAR_5,
       VAR_4) < 0)
     VAR_11 = VAR_0;
 else if (FUNC_3(VAR_9->used_props, VAR_10, 0) < 0)
     FUNC_2(VAR_9->used_props, VAR_10, 0);
    }

    return VAR_11;
}
