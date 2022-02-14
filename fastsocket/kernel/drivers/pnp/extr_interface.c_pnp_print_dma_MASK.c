
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pnp_dma {int map; int flags; } ;
typedef int pnp_info_buffer_t ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;



 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,char*,...) ;

__attribute__((used)) static void FUNC_1(pnp_info_buffer_t * VAR_5, char *VAR_6,
     struct pnp_dma *VAR_7)
{
 int VAR_8 = 1, VAR_9;
 char *VAR_10;

 FUNC_0(VAR_5, "%sdma ", VAR_6);
 for (VAR_9 = 0; VAR_9 < 8; VAR_9++)
  if (VAR_7->map & (1 << VAR_9)) {
   if (!VAR_8) {
    FUNC_0(VAR_5, ",");
   } else {
    VAR_8 = 0;
   }
   FUNC_0(VAR_5, "%i", VAR_9);
  }
 if (!VAR_7->map)
  FUNC_0(VAR_5, "<none>");
 switch (VAR_7->flags & VAR_3) {
 case 131:
  VAR_10 = "8-bit";
  break;
 case 132:
  VAR_10 = "8-bit&16-bit";
  break;
 default:
  VAR_10 = "16-bit";
 }
 FUNC_0(VAR_5, " %s", VAR_10);
 if (VAR_7->flags & VAR_1)
  FUNC_0(VAR_5, " master");
 if (VAR_7->flags & VAR_0)
  FUNC_0(VAR_5, " byte-count");
 if (VAR_7->flags & VAR_4)
  FUNC_0(VAR_5, " word-count");
 switch (VAR_7->flags & VAR_2) {
 case 130:
  VAR_10 = "type-A";
  break;
 case 129:
  VAR_10 = "type-B";
  break;
 case 128:
  VAR_10 = "type-F";
  break;
 default:
  VAR_10 = "compatible";
  break;
 }
 FUNC_0(VAR_5, " %s\n", VAR_10);
}
