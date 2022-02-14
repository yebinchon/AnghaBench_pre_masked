
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct isdn_ppp_resetparams {int dummy; } ;
struct bsd_db {scalar_t__ clear_count; scalar_t__ seqno; } ;


 int FUNC_0 (struct bsd_db*) ;

__attribute__((used)) static void FUNC_1 (void *VAR_0,unsigned char VAR_1, unsigned char VAR_2,
   unsigned char *VAR_3, unsigned VAR_4,
   struct isdn_ppp_resetparams *VAR_5)
{
 struct bsd_db *VAR_6 = (struct bsd_db *) VAR_0;

 FUNC_0(VAR_6);
 VAR_6->seqno = 0;
 VAR_6->clear_count = 0;
}
