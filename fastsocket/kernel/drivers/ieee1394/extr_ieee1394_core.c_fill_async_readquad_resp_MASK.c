
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hpsb_packet {int header_size; scalar_t__ data_size; int * header; } ;
typedef int quadlet_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_1(struct hpsb_packet *VAR_1, int VAR_2,
         quadlet_t VAR_3)
{
 FUNC_0(VAR_0);
 VAR_1->header[3] = VAR_3;
 VAR_1->header_size = 16;
 VAR_1->data_size = 0;
}
