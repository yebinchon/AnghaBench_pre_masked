
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ether_header {int* ether_shost; int* ether_dhost; int ether_type; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*,int,int,int,int,int,int,int,int,int,int,int,int,int) ;

__attribute__((used)) static void
FUNC_2(struct ether_header *VAR_0)
{
 FUNC_1("%02x:%02x:%02x:%02x:%02x:%02x > "
     "%02x:%02x:%02x:%02x:%02x:%02x 0x%04x ",
     VAR_0->ether_shost[0], VAR_0->ether_shost[1], VAR_0->ether_shost[2],
     VAR_0->ether_shost[3], VAR_0->ether_shost[4], VAR_0->ether_shost[5],
     VAR_0->ether_dhost[0], VAR_0->ether_dhost[1], VAR_0->ether_dhost[2],
     VAR_0->ether_dhost[3], VAR_0->ether_dhost[4], VAR_0->ether_dhost[5],
     FUNC_0(VAR_0->ether_type));
}
