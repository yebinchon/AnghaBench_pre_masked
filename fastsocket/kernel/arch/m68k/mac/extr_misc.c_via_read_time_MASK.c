
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int __u8 ;


 long VAR_0 ;
 int FUNC_0 (char*,long,long) ;
 int FUNC_1 (int,int *) ;

__attribute__((used)) static long FUNC_2(void)
{
 union {
  __u8 cdata[4];
  long idata;
 } VAR_1, VAR_2;
 int VAR_3;






 VAR_3 = 0;
 do {
  if (++VAR_3 > 10) {
   FUNC_0("via_read_time: couldn't get valid time, "
          "last read = 0x%08lx and 0x%08lx\n",
          VAR_2.idata, VAR_1.idata);
   break;
  }

  VAR_2.idata = VAR_1.idata;
  VAR_1.idata = 0;

  FUNC_1(0x81, &VAR_1.cdata[3]);
  FUNC_1(0x85, &VAR_1.cdata[2]);
  FUNC_1(0x89, &VAR_1.cdata[1]);
  FUNC_1(0x8D, &VAR_1.cdata[0]);
 } while (VAR_1.idata != VAR_2.idata);

 return VAR_1.idata - VAR_0;
}
