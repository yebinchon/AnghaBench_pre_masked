
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int num_rows; int xbits; } ;
typedef TYPE_1__ IVIHuffDesc ;


 int FUNC_0 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_1(IVIHuffDesc *VAR_0, const IVIHuffDesc *VAR_1)
{
    VAR_0->num_rows = VAR_1->num_rows;
    FUNC_0(VAR_0->xbits, VAR_1->xbits, VAR_1->num_rows);
}
