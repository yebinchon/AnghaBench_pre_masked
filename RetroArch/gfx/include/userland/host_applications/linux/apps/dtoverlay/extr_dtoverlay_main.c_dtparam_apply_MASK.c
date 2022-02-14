
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dtparam_state {char const* override_value; int * used_props; } ;
typedef int STRING_VEC_T ;
typedef int DTBLOB_T ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *,char const*,void*,int,int ,void*) ;
 int VAR_1 ;
 int FUNC_3 (void*) ;
 void* FUNC_4 (int) ;
 int FUNC_5 (void*,char const*,int) ;

int FUNC_6(DTBLOB_T *VAR_2, const char *VAR_3,
    const char *VAR_4, int VAR_5,
    const char *VAR_6, STRING_VEC_T *VAR_7)
{
    struct dtparam_state VAR_8;
    void *VAR_9;
    int VAR_10;

    VAR_8.used_props = VAR_7;
    VAR_8.override_value = VAR_6;


    VAR_9 = FUNC_4(VAR_5);
    if (VAR_9)
    {
 FUNC_5(VAR_9, VAR_4, VAR_5);
 VAR_10 = FUNC_2(VAR_2, VAR_3,
      VAR_9, VAR_5,
      VAR_1,
      (void *)&VAR_8);
 FUNC_3(VAR_9);
    }
    else
    {
 FUNC_1("out of memory");
 VAR_10 = FUNC_0(VAR_0);
    }

    return VAR_10;
}
