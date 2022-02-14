
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct vivi_fh {int input; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct vivi_fh*,char*,int) ;
 int* VAR_6 ;
 int FUNC_1 (char*) ;

__attribute__((used)) static void FUNC_2(struct vivi_fh *VAR_7, char *VAR_8, int VAR_9, int VAR_10,
  int VAR_11, int VAR_12, int VAR_13, char *VAR_14)
{
 int VAR_15, VAR_16, VAR_17;
 int VAR_18 = VAR_9;
 char *VAR_19;
 u8 VAR_20;


 VAR_10 /= 2;


 for (VAR_15 = 0; VAR_15 < VAR_10; VAR_15++) {
  int VAR_21 = ((VAR_15 + VAR_13) * 8/(VAR_10 + 1)) % 8;

  FUNC_0(VAR_7, VAR_8 + VAR_18, VAR_21);
  VAR_18 += 4;
 }




 if (VAR_2 >= VAR_11)
  goto end;

 if (VAR_1 + FUNC_1(VAR_14) >= VAR_10)
  goto end;

 if (VAR_12 >= VAR_4 && VAR_12 <= VAR_2) {
  VAR_20 = VAR_6[VAR_7->input * 16 + VAR_12 - VAR_4];
  VAR_18 = VAR_1;
  for (VAR_16 = 0; VAR_16 < 7; VAR_16++) {

   if (VAR_20 & 1 << (7 - VAR_16))
    FUNC_0(VAR_7, VAR_8 + VAR_18, VAR_5);
   else
    FUNC_0(VAR_7, VAR_8 + VAR_18, VAR_0);
   VAR_18 += 2;
  }
 }


 if (VAR_3 + FUNC_1(VAR_14) >= VAR_10)
  goto end;


 if (VAR_12 >= VAR_4 && VAR_12 <= VAR_2) {
  VAR_17 = VAR_3;
  for (VAR_19 = VAR_14; *VAR_19; VAR_19++) {
   VAR_20 = VAR_6[(*VAR_19-0x30)*16+VAR_12-VAR_4];
   for (VAR_16 = 0; VAR_16 < 7; VAR_16++) {
    VAR_18 = VAR_9 + VAR_17 * 2;

    if (VAR_20 & 1 << (7 - VAR_16))
     FUNC_0(VAR_7, VAR_8 + VAR_18, VAR_5);
    else
     FUNC_0(VAR_7, VAR_8 + VAR_18, VAR_0);
    VAR_17++;
   }
  }
 }

end:
 return;
}
