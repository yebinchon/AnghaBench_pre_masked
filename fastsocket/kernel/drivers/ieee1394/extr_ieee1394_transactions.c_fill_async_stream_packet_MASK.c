
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hpsb_packet {int* header; int header_size; int data_size; int tcode; int type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_0(struct hpsb_packet *VAR_3, int VAR_4,
         int VAR_5, int VAR_6, int VAR_7)
{
 VAR_3->header[0] = (VAR_4 << 16) | (VAR_6 << 14) | (VAR_5 << 8)
     | (VAR_1 << 4) | VAR_7;

 VAR_3->header_size = 4;
 VAR_3->data_size = VAR_4;
 VAR_3->type = VAR_2;
 VAR_3->tcode = VAR_0;
}
