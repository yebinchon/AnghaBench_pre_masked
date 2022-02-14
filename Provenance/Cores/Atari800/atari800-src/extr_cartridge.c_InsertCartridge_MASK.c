
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef char UBYTE ;
struct TYPE_4__ {char const* filename; char* image; int type; int size; } ;
typedef int FILE ;
typedef TYPE_1__ CARTRIDGE_image_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int* VAR_6 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int * FUNC_7 (char const*,char*) ;
 int FUNC_8 (char*,int,int,int *) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (char const*,char const*) ;

__attribute__((used)) static int FUNC_11(const char *VAR_7, CARTRIDGE_image_t *VAR_8)
{
 FILE *VAR_9;
 int VAR_10;
 int VAR_11;
 UBYTE VAR_12[16];


 VAR_9 = FUNC_7(VAR_7, "rb");
 if (VAR_9 == ((void*)0))
  return VAR_2;

 VAR_10 = FUNC_3(VAR_9);
 FUNC_5(VAR_9);


 if (VAR_8->filename != VAR_7)

  FUNC_10(VAR_8->filename, VAR_7);


 if ((VAR_10 & 0x3ff) == 0) {

  VAR_8->image = (UBYTE *) FUNC_4(VAR_10);
  if (FUNC_8(VAR_8->image, 1, VAR_10, VAR_9) < VAR_10) {
   FUNC_2("Error reading cartridge.\n");
  }
  FUNC_6(VAR_9);

  VAR_8->type = VAR_4;
  VAR_10 >>= 10;
  VAR_8->size = VAR_10;
  for (VAR_11 = 1; VAR_11 <= VAR_3; VAR_11++)
   if (VAR_6[VAR_11] == VAR_10) {
    if (VAR_8->type == VAR_4) {
     VAR_8->type = VAR_11;
    } else {

     VAR_8->type = VAR_5;
     return VAR_10;
    }
   }
  if (VAR_8->type != VAR_4) {
   FUNC_1(VAR_8);
   return 0;
  }
  FUNC_9(VAR_8->image);
  VAR_8->image = ((void*)0);
  return VAR_1;
 }

 if (FUNC_8(VAR_12, 1, 16, VAR_9) < 16) {
  FUNC_2("Error reading cartridge.\n");
 }
 if ((VAR_12[0] == 'C') &&
  (VAR_12[1] == 'A') &&
  (VAR_12[2] == 'R') &&
  (VAR_12[3] == 'T')) {
  VAR_11 = (VAR_12[4] << 24) |
   (VAR_12[5] << 16) |
   (VAR_12[6] << 8) |
   VAR_12[7];
  if (VAR_11 >= 1 && VAR_11 <= VAR_3) {
   int VAR_13;
   int VAR_14;
   VAR_10 = VAR_6[VAR_11] << 10;
   VAR_8->size = VAR_6[VAR_11];

   VAR_8->image = (UBYTE *) FUNC_4(VAR_10);
   if (FUNC_8(VAR_8->image, 1, VAR_10, VAR_9) < VAR_10) {
    FUNC_2("Error reading cartridge.\n");
   }
   FUNC_6(VAR_9);
   VAR_13 = (VAR_12[8] << 24) |
    (VAR_12[9] << 16) |
    (VAR_12[10] << 8) |
    VAR_12[11];
   VAR_8->type = VAR_11;
   VAR_14 = VAR_13 == FUNC_0(VAR_8->image, VAR_10) ? 0 : VAR_0;
   FUNC_1(VAR_8);
   return VAR_14;
  }
 }
 FUNC_6(VAR_9);
 return VAR_1;
}
