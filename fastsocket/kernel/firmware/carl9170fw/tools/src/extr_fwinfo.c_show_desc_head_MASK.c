
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct carl9170fw_desc_head {int length; int * magic; int cur_ver; int min_ver; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,int,int,int,int,int,int ,int ) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_3(struct carl9170fw_desc_head *VAR_1)
{


 FUNC_1(VAR_0, ">\t%c%c%c%c Descriptor: size:%d, compatible:%d, "
   "version:%d\n",
  (isprint(VAR_1->magic[0]) ? VAR_1->magic[0] : ' '), (FUNC_0(VAR_1->magic[1]) ? VAR_1->magic[1] : ' '), (FUNC_0(VAR_1->magic[2]) ? VAR_1->magic[2] : ' '),
  (FUNC_0(VAR_1->magic[3]) ? VAR_1->magic[3] : ' '), FUNC_2(VAR_1->length), VAR_1->min_ver,
  VAR_1->cur_ver);
}
