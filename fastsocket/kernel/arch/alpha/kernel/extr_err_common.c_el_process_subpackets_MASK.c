
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct el_subpacket {scalar_t__ length; } ;


 struct el_subpacket* FUNC_0 (struct el_subpacket*) ;
 int VAR_0 ;
 int FUNC_1 (char*,int ,int) ;

void
FUNC_2(struct el_subpacket *VAR_1, int VAR_2)
{
 struct el_subpacket *VAR_3;
 int VAR_4;

 VAR_3 = (struct el_subpacket *)
  ((unsigned long)VAR_1 + VAR_1->length);

 for (VAR_4 = 0; VAR_3 && VAR_4 < VAR_2; VAR_4++) {
  FUNC_1("%sPROCESSING SUBPACKET %d\n", VAR_0, VAR_4);
  VAR_3 = FUNC_0(VAR_3);
 }
}
