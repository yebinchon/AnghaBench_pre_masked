
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int IO; int PCIO; int (* LockUnlock ) (TYPE_1__*,int ) ;} ;
typedef TYPE_1__ RIVA_HW_INST ;


 void* FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int,int) ;
 int FUNC_2 (TYPE_1__*,int ) ;

__attribute__((used)) static void FUNC_3
(
    RIVA_HW_INST *VAR_0,
    unsigned VAR_1
)
{
    int VAR_2 = VAR_1 >> 2;
    int VAR_3 = (VAR_1 & 3) << 1;
    unsigned char VAR_4;




    VAR_0->LockUnlock(VAR_0, 0);



    FUNC_1(VAR_0->PCIO, 0x3D4, 0x0D); FUNC_1(VAR_0->PCIO, 0x3D5, VAR_2);
    VAR_2 >>= 8;
    FUNC_1(VAR_0->PCIO, 0x3D4, 0x0C); FUNC_1(VAR_0->PCIO, 0x3D5, VAR_2);
    VAR_2 >>= 8;
    FUNC_1(VAR_0->PCIO, 0x3D4, 0x19); VAR_4 = FUNC_0(VAR_0->PCIO, 0x3D5);
    FUNC_1(VAR_0->PCIO, 0x3D5, (VAR_2 & 0x01F) | (VAR_4 & ~0x1F));
    FUNC_1(VAR_0->PCIO, 0x3D4, 0x2D); VAR_4 = FUNC_0(VAR_0->PCIO, 0x3D5);
    FUNC_1(VAR_0->PCIO, 0x3D5, (VAR_2 & 0x60) | (VAR_4 & ~0x60));



    VAR_2 = FUNC_0(VAR_0->PCIO, VAR_0->IO + 0x0A);
    FUNC_1(VAR_0->PCIO, 0x3C0, 0x13);
    FUNC_1(VAR_0->PCIO, 0x3C0, VAR_3);
}
