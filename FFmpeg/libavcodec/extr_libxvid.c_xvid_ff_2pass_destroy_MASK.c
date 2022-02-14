
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xvid_plg_destroy_t ;
struct xvid_context {scalar_t__* twopassbuffer; } ;



__attribute__((used)) static int FUNC_0(struct xvid_context *VAR_0,
                                 xvid_plg_destroy_t *VAR_1)
{


    if (VAR_0->twopassbuffer)
        VAR_0->twopassbuffer[0] = 0;
    return 0;
}
