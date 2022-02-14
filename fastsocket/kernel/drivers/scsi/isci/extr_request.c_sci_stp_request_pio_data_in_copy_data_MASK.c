
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct isci_stp_request {scalar_t__ pio_len; } ;
typedef enum sci_status { ____Placeholder_sci_status } sci_status ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct isci_stp_request*,int *,scalar_t__) ;

__attribute__((used)) static enum sci_status FUNC_1(
 struct isci_stp_request *VAR_2,
 u8 *VAR_3)
{
 enum sci_status VAR_4;




 if (VAR_2->pio_len < VAR_1) {
  VAR_4 = FUNC_0(
   VAR_2, VAR_3, VAR_2->pio_len);

  if (VAR_4 == VAR_0)
   VAR_2->pio_len = 0;
 } else {

  VAR_4 = FUNC_0(
   VAR_2, VAR_3, VAR_1);

  if (VAR_4 == VAR_0)
   VAR_2->pio_len -= VAR_1;
 }

 return VAR_4;
}
