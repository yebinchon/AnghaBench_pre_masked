
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mca_device {int proc_dev; int slot; scalar_t__ (* procfn ) (char*,int ,int ) ;} ;
typedef int off_t ;


 int FUNC_0 (char*,struct mca_device*) ;
 scalar_t__ FUNC_1 (char*,int ,int ) ;

__attribute__((used)) static int FUNC_2(char *VAR_0, char **VAR_1, off_t VAR_2,
     int VAR_3, int *VAR_4, void *VAR_5)
{
 struct mca_device *VAR_6 = (struct mca_device *)VAR_5;
 int VAR_7 = 0;



 VAR_7 = FUNC_0(VAR_0, VAR_6);



 if(VAR_6->procfn) {
  VAR_7 += VAR_6->procfn(VAR_0+VAR_7, VAR_6->slot,
           VAR_6->proc_dev);
 }
 if (VAR_7 <= VAR_2+VAR_3) *VAR_4 = 1;
 *VAR_1 = VAR_0 + VAR_2;
 VAR_7 -= VAR_2;
 if (VAR_7>VAR_3) VAR_7 = VAR_3;
 if (VAR_7<0) VAR_7 = 0;
 return VAR_7;
}
