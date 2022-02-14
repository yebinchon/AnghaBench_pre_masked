
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int mac_bits; } ;
struct qeth_card {TYPE_1__ info; } ;
typedef int __u8 ;


 int VAR_0 ;
 int FUNC_0 (int ,int,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct qeth_card*,int *,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct qeth_card *VAR_4, __u8 *VAR_5)
{
 FUNC_0(VAR_2, 2, "L2Delmac");
 if (!(VAR_4->info.mac_bits & VAR_1))
  return 0;
 return FUNC_1(VAR_4, VAR_5, VAR_0,
       VAR_3);
}
