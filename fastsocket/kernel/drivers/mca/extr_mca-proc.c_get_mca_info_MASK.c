
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mca_device {int dummy; } ;
typedef int off_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct mca_device*,char*,int) ;
 struct mca_device* FUNC_1 (int) ;
 scalar_t__ FUNC_2 (char*,char*,...) ;

__attribute__((used)) static int FUNC_3(char *VAR_5, char **VAR_6, off_t VAR_7,
   int VAR_8, int *VAR_9, void *VAR_10)
{
 int VAR_11, VAR_12 = 0;

 if(VAR_4) {
  struct mca_device *VAR_13;


  for(VAR_11=0; VAR_11<VAR_2; VAR_11++) {
   VAR_13 = FUNC_1(VAR_11);

   VAR_12 += FUNC_2(VAR_5+VAR_12, "Slot %d: ", VAR_11+1);
   VAR_12 = FUNC_0(VAR_13, VAR_5, VAR_12);
  }



  VAR_13 = FUNC_1(VAR_1);
  VAR_12 += FUNC_2(VAR_5+VAR_12, "Video : ");
  VAR_12 = FUNC_0(VAR_13, VAR_5, VAR_12);



  VAR_13 = FUNC_1(VAR_0);
  VAR_12 += FUNC_2(VAR_5+VAR_12, "SCSI  : ");
  VAR_12 = FUNC_0(VAR_13, VAR_5, VAR_12);



  VAR_13 = FUNC_1(VAR_3);
  VAR_12 += FUNC_2(VAR_5+VAR_12, "Planar: ");
  VAR_12 = FUNC_0(VAR_13, VAR_5, VAR_12);
 } else {



 }

 if (VAR_12 <= VAR_7+VAR_8) *VAR_9 = 1;
 *VAR_6 = VAR_5 + VAR_7;
 VAR_12 -= VAR_7;
 if (VAR_12>VAR_8) VAR_12 = VAR_8;
 if (VAR_12<0) VAR_12 = 0;
 return VAR_12;
}
