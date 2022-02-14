
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hpsb_packet {int* header; int header_size; int data_size; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_1(struct hpsb_packet *VAR_2, int VAR_3,
          int VAR_4)
{
 if (VAR_3 != VAR_0)
  VAR_4 = 0;

 FUNC_0(VAR_1);
 VAR_2->header[3] = VAR_4 << 16;
 VAR_2->header_size = 16;
 VAR_2->data_size = VAR_4 + (VAR_4 % 4 ? 4 - (VAR_4 % 4) : 0);
}
