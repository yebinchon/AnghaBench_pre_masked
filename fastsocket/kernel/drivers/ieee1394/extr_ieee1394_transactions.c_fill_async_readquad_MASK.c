
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct hpsb_packet {int header_size; int expect_response; scalar_t__ data_size; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_1(struct hpsb_packet *VAR_1, u64 VAR_2)
{
 FUNC_0(VAR_0);
 VAR_1->header_size = 12;
 VAR_1->data_size = 0;
 VAR_1->expect_response = 1;
}
