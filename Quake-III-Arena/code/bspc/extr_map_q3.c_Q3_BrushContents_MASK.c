
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int contents; int surf; } ;
typedef TYPE_1__ side_t ;
struct TYPE_5__ {int numsides; int contents; int brushnum; int entitynum; TYPE_1__* original_sides; } ;
typedef TYPE_2__ mapbrush_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (char*,int ,int) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (int) ;
 int VAR_9 ;
 int VAR_10 ;

int FUNC_3(mapbrush_t *VAR_11)
{
 int VAR_12, VAR_13, VAR_14, VAR_15;
 side_t *VAR_16;

 VAR_16 = &VAR_11->original_sides[0];
 VAR_12 = VAR_16->contents;

 VAR_14 = 0;
 VAR_15 = 0;
 for (VAR_13 = 1; VAR_13 < VAR_11->numsides; VAR_13++)
 {
  VAR_16 = &VAR_11->original_sides[VAR_13];
  if (VAR_16->contents != VAR_12) VAR_14 = 1;
  if (VAR_16->surf & (VAR_9|VAR_10)) VAR_15 = 1;
  VAR_12 |= VAR_16->contents;
 }

 if (VAR_15)
 {
  if (VAR_12)
  {
   FUNC_1("WARNING: hint brush with contents: ");
   FUNC_2(VAR_12);
   FUNC_1("\r\n");

   FUNC_1("brush contents is: ");
   FUNC_2(VAR_11->contents);
   FUNC_1("\r\n");
  }
  return 0;
 }




 VAR_12 &= ~(VAR_2|VAR_1);

 if (VAR_14)
 {
  FUNC_1("Entity %i, Brush %i: mixed face contents "
   , VAR_11->entitynum, VAR_11->brushnum);
  FUNC_2(VAR_12);
  FUNC_1("\r\n");

  FUNC_1("brush contents is: ");
  FUNC_2(VAR_11->contents);
  FUNC_1("\r\n");

  if (VAR_12 & VAR_0) return VAR_0;







  if (VAR_12 & (VAR_3 | VAR_5 | VAR_8))
  {
   return (VAR_12 & (VAR_3 | VAR_5 | VAR_8));
  }
  if (VAR_12 & VAR_4) return (VAR_12 & VAR_4);
  return (VAR_12 & VAR_6);
 }






 if (VAR_12 == (VAR_12 & VAR_7))
 {

  VAR_12 = 0;
 }
 if (VAR_12 & VAR_0)
 {
  FUNC_0("brush %i is a donotenter brush, c = %X\n", VAR_11->brushnum, VAR_12);
 }
 return VAR_12;
}
