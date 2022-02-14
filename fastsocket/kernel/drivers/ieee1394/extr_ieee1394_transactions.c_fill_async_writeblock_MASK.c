
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct hpsb_packet {int* header; int header_size; int expect_response; int data_size; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_1(struct hpsb_packet *VAR_1, u64 VAR_2,
      int VAR_3)
{
 FUNC_0(VAR_0);
 VAR_1->header[3] = VAR_3 << 16;
 VAR_1->header_size = 16;
 VAR_1->expect_response = 1;
 VAR_1->data_size = VAR_3 + (VAR_3 % 4 ? 4 - (VAR_3 % 4) : 0);
}
