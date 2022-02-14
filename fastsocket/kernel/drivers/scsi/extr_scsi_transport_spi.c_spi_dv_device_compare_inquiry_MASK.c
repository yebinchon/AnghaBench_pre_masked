
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct scsi_device {int inquiry_len; } ;
typedef enum spi_compare_returns { ____Placeholder_spi_compare_returns } spi_compare_returns ;


 int VAR_0 ;
 int const VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int *,int *,int const) ;
 int FUNC_1 (int *,int ,int const) ;
 int FUNC_2 (struct scsi_device*) ;
 int FUNC_3 (struct scsi_device*,int ) ;
 int FUNC_4 (struct scsi_device*,char const*,int ,int *,int const,int *) ;

__attribute__((used)) static enum spi_compare_returns
FUNC_5(struct scsi_device *VAR_5, u8 *VAR_6,
         u8 *VAR_7, const int VAR_8)
{
 int VAR_9, VAR_10;
 const int VAR_11 = VAR_5->inquiry_len;
 const char VAR_12[] = {
  VAR_1, 0, 0, 0, VAR_11, 0
 };

 for (VAR_9 = 0; VAR_9 < VAR_8; VAR_9++) {
  FUNC_1(VAR_7, 0, VAR_11);

  VAR_10 = FUNC_4(VAR_5, VAR_12, VAR_0,
         VAR_7, VAR_11, ((void*)0));

  if(VAR_10 || !FUNC_2(VAR_5)) {
   FUNC_3(VAR_5, VAR_2);
   return VAR_3;
  }



  if (VAR_7 == VAR_6) {
   VAR_7 += VAR_11;
   --VAR_9;
   continue;
  }

  if (FUNC_0(VAR_6, VAR_7, VAR_11) != 0)

   return VAR_3;
 }
 return VAR_4;
}
