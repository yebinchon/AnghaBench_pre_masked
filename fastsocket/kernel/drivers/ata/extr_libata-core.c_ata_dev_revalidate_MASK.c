
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct ata_device {scalar_t__ n_sectors; scalar_t__ n_native_sectors; unsigned int class; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (unsigned int) ;
 int FUNC_1 (struct ata_device*) ;
 int FUNC_2 (struct ata_device*) ;
 int FUNC_3 (struct ata_device*,int ,char*,...) ;
 int FUNC_4 (struct ata_device*,unsigned int) ;

int FUNC_5(struct ata_device *VAR_7, unsigned int VAR_8,
         unsigned int VAR_9)
{
 u64 VAR_10 = VAR_7->n_sectors;
 u64 VAR_11 = VAR_7->n_native_sectors;
 int VAR_12;

 if (!FUNC_2(VAR_7))
  return -VAR_3;


 if (FUNC_0(VAR_8) &&
     VAR_8 != VAR_0 &&
     VAR_8 != VAR_1 &&
     VAR_8 != VAR_2) {
  FUNC_3(VAR_7, VAR_5, "class mismatch %u != %u\n",
          VAR_7->class, VAR_8);
  VAR_12 = -VAR_3;
  goto fail;
 }


 VAR_12 = FUNC_4(VAR_7, VAR_9);
 if (VAR_12)
  goto fail;


 VAR_12 = FUNC_1(VAR_7);
 if (VAR_12)
  goto fail;


 if (VAR_7->class == VAR_0 && VAR_10 &&
     VAR_7->n_sectors != VAR_10) {
  FUNC_3(VAR_7, VAR_6, "n_sectors mismatch "
          "%llu != %llu\n",
          (unsigned long long)VAR_10,
          (unsigned long long)VAR_7->n_sectors);





  if (VAR_7->n_native_sectors == VAR_11 &&
      VAR_7->n_sectors > VAR_10 &&
      VAR_7->n_sectors == VAR_11) {
   FUNC_3(VAR_7, VAR_6,
           "new n_sectors matches native, probably "
           "late HPA unlock, continuing\n");

   VAR_7->n_sectors = VAR_10;
  } else {

   VAR_7->n_native_sectors = VAR_11;
   VAR_7->n_sectors = VAR_10;
   VAR_12 = -VAR_3;
   goto fail;
  }
 }

 return 0;

 fail:
 FUNC_3(VAR_7, VAR_4, "revalidation failed (errno=%d)\n", VAR_12);
 return VAR_12;
}
