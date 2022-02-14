
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct page {int dummy; } ;
struct file {int f_flags; } ;
struct address_space {int host; } ;
typedef int pgoff_t ;
typedef int loff_t ;
struct TYPE_2__ {scalar_t__ clientCanCacheRead; } ;


 TYPE_1__* FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (struct page*) ;
 int FUNC_2 (struct page*) ;
 int FUNC_3 (int,char*,long long,unsigned int) ;
 int FUNC_4 (struct file*,struct page*,int*) ;
 struct page* FUNC_5 (struct address_space*,int,unsigned int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct page*,int ,int,int,int) ;

__attribute__((used)) static int FUNC_8(struct file *VAR_6, struct address_space *VAR_7,
   loff_t VAR_8, unsigned VAR_9, unsigned VAR_10,
   struct page **VAR_11, void **VAR_12)
{
 pgoff_t VAR_13 = VAR_8 >> VAR_3;
 loff_t VAR_14 = VAR_8 & (VAR_4 - 1);
 loff_t VAR_15 = VAR_8 & VAR_5;
 loff_t VAR_16;
 struct page *VAR_17;
 int VAR_18 = 0;

 FUNC_3(1, "write_begin from %lld len %d", (long long)VAR_8, VAR_9);

 VAR_17 = FUNC_5(VAR_7, VAR_13, VAR_10);
 if (!VAR_17) {
  VAR_18 = -VAR_0;
  goto out;
 }

 if (FUNC_1(VAR_17))
  goto out;






 if (VAR_9 == VAR_4)
  goto out;







 if (FUNC_0(VAR_7->host)->clientCanCacheRead) {
  VAR_16 = FUNC_6(VAR_7->host);
  if (VAR_15 >= VAR_16 ||
      (VAR_14 == 0 && (VAR_8 + VAR_9) >= VAR_16)) {
   FUNC_7(VAR_17, 0, VAR_14,
        VAR_14 + VAR_9,
        VAR_4);






   FUNC_2(VAR_17);
   goto out;
  }
 }

 if ((VAR_6->f_flags & VAR_1) != VAR_2) {





  FUNC_4(VAR_6, VAR_17, &VAR_15);
 } else {




 }
out:
 *VAR_11 = VAR_17;
 return VAR_18;
}
