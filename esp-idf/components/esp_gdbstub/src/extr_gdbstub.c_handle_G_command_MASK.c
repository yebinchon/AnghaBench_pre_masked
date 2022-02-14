
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_2__ {int regfile; } ;


 int FUNC_0 (unsigned char const**,int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ) ;
 TYPE_1__ VAR_0 ;

__attribute__((used)) static void FUNC_3(const unsigned char* VAR_1, int VAR_2)
{
    uint32_t *VAR_3 = (uint32_t *) &VAR_0.regfile;
    for (int VAR_4 = 0; VAR_4 < sizeof(VAR_0.regfile) / sizeof(*VAR_3); ++VAR_4) {
        *VAR_3++ = FUNC_2(FUNC_0(&VAR_1, 32));
    }
    FUNC_1("OK");
}
