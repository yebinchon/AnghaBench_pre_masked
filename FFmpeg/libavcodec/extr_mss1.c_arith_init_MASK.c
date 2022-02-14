
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * gb; } ;
struct TYPE_5__ {int high; int get_number; int get_model_sym; TYPE_1__ gbc; scalar_t__ overread; int value; scalar_t__ low; } ;
typedef int GetBitContext ;
typedef TYPE_2__ ArithCoder ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int) ;

__attribute__((used)) static void FUNC_1(ArithCoder *VAR_2, GetBitContext *VAR_3)
{
    VAR_2->low = 0;
    VAR_2->high = 0xFFFF;
    VAR_2->value = FUNC_0(VAR_3, 16);
    VAR_2->overread = 0;
    VAR_2->gbc.gb = VAR_3;
    VAR_2->get_model_sym = VAR_0;
    VAR_2->get_number = VAR_1;
}
