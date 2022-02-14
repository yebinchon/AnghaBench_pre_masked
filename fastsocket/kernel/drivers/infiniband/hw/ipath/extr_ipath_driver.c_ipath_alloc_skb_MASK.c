
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sk_buff {scalar_t__ data; } ;
struct ipath_devdata {int ipath_ibmaxlen; int ipath_flags; } ;
typedef int gfp_t ;


 int VAR_0 ;
 struct sk_buff* FUNC_0 (int,int ) ;
 int FUNC_1 (struct ipath_devdata*,char*,int) ;
 int FUNC_2 (struct sk_buff*,int) ;

struct sk_buff *FUNC_3(struct ipath_devdata *VAR_1,
    gfp_t VAR_2)
{
 struct sk_buff *VAR_3;
 u32 VAR_4;
 VAR_4 = VAR_1->ipath_ibmaxlen + 4;

 if (VAR_1->ipath_flags & VAR_0) {




  VAR_4 += 2047;
 }

 VAR_3 = FUNC_0(VAR_4, VAR_2);
 if (!VAR_3) {
  FUNC_1(VAR_1, "Failed to allocate skbuff, length %u\n",
         VAR_4);
  goto bail;
 }

 FUNC_2(VAR_3, 4);

 if (VAR_1->ipath_flags & VAR_0) {
  u32 VAR_5 = (unsigned long)VAR_3->data & 2047;
  if (VAR_5)
   FUNC_2(VAR_3, 2048 - VAR_5);
 }

bail:
 return VAR_3;
}
