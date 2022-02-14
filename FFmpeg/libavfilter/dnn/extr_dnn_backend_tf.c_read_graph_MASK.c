
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {long length; int data_deallocator; void* data; } ;
typedef TYPE_1__ TF_Buffer ;
typedef int AVIOContext ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 () ;
 int FUNC_1 (unsigned char**) ;
 unsigned char* FUNC_2 (long) ;
 int FUNC_3 (int **) ;
 scalar_t__ FUNC_4 (int **,char const*,int ) ;
 long FUNC_5 (int *,unsigned char*,long) ;
 long FUNC_6 (int *) ;
 int VAR_1 ;

__attribute__((used)) static TF_Buffer *FUNC_7(const char *VAR_2)
{
    TF_Buffer *VAR_3;
    unsigned char *VAR_4 = ((void*)0);
    AVIOContext *VAR_5;
    long VAR_6, VAR_7;

    if (FUNC_4(&VAR_5, VAR_2, VAR_0) < 0){
        return ((void*)0);
    }

    VAR_6 = FUNC_6(VAR_5);

    VAR_4 = FUNC_2(VAR_6);
    if (!VAR_4){
        FUNC_3(&VAR_5);
        return ((void*)0);
    }
    VAR_7 = FUNC_5(VAR_5, VAR_4, VAR_6);
    FUNC_3(&VAR_5);
    if (VAR_7 != VAR_6){
        FUNC_1(&VAR_4);
        return ((void*)0);
    }

    VAR_3 = FUNC_0();
    VAR_3->data = (void *)VAR_4;
    VAR_3->length = VAR_6;
    VAR_3->data_deallocator = VAR_1;

    return VAR_3;
}
