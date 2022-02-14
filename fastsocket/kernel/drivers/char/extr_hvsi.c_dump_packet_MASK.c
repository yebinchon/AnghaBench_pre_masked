
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct hvsi_header {int len; int seqno; int type; } ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (char*,int ,int ,int ) ;

__attribute__((used)) static void FUNC_2(uint8_t *VAR_0)
{
 struct hvsi_header *VAR_1 = (struct hvsi_header *)VAR_0;

 FUNC_1("type 0x%x, len %i, seqno %i:\n", VAR_1->type, VAR_1->len,
   VAR_1->seqno);

 FUNC_0(VAR_0, VAR_1->len);
}
