
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ (* allocate ) (size_t) ;} ;
typedef TYPE_1__ internal_hooks ;


 int FUNC_0 (unsigned char*,unsigned char const*,size_t) ;
 int FUNC_1 (char const*) ;
 scalar_t__ FUNC_2 (size_t) ;

__attribute__((used)) static unsigned char* FUNC_3(const unsigned char* VAR_0, const internal_hooks * const VAR_1)
{
    size_t VAR_2 = 0;
    unsigned char *VAR_3 = ((void*)0);

    if (VAR_0 == ((void*)0))
    {
        return ((void*)0);
    }

    VAR_2 = FUNC_1((const char*)VAR_0) + sizeof("");
    if (!(VAR_3 = (unsigned char*)VAR_1->allocate(VAR_2)))
    {
        return ((void*)0);
    }
    FUNC_0(VAR_3, VAR_0, VAR_2);

    return VAR_3;
}
