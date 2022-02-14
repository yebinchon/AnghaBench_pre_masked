
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct ubi_vid_hdr {int dummy; } ;
struct ubi_device {int peb_size; int vid_hdr_aloffset; TYPE_1__* mtd; } ;
typedef int loff_t ;
struct TYPE_3__ {int (* write ) (TYPE_1__*,int,int,size_t*,void*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,int,int,size_t*,void*) ;
 int FUNC_1 (TYPE_1__*,int,int,size_t*,void*) ;
 int FUNC_2 (struct ubi_device*,int,int ,int) ;
 int FUNC_3 (char*,int,int,int) ;
 int FUNC_4 (struct ubi_device*,int,struct ubi_vid_hdr*,int ) ;

__attribute__((used)) static int FUNC_5(struct ubi_device *VAR_2, int VAR_3)
{
 int VAR_4, VAR_5;
 size_t VAR_6;
 loff_t VAR_7;
 uint32_t VAR_8 = 0;
 struct ubi_vid_hdr VAR_9;

 VAR_7 = (loff_t)VAR_3 * VAR_2->peb_size + VAR_2->vid_hdr_aloffset;
 VAR_4 = VAR_2->mtd->write(VAR_2->mtd, VAR_7, 4, &VAR_6, (void *)&VAR_8);
 if (!VAR_4) {
  VAR_7 -= VAR_2->vid_hdr_aloffset;
  VAR_4 = VAR_2->mtd->write(VAR_2->mtd, VAR_7, 4, &VAR_6,
          (void *)&VAR_8);
  if (!VAR_4)
   return 0;
 }







 VAR_5 = FUNC_4(VAR_2, VAR_3, &VAR_9, 0);
 if (VAR_5 == VAR_1)





  return 0;






 FUNC_3("cannot invalidate PEB %d, write returned %d read returned %d",
  VAR_3, VAR_4, VAR_5);
 FUNC_2(VAR_2, VAR_3, 0, VAR_2->peb_size);
 return -VAR_0;
}
