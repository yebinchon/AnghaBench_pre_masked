
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct zd_usb {int dummy; } ;
struct rx_length_info {int * length; int tag; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (int ,char*,unsigned int) ;
 unsigned int FUNC_1 (int *) ;
 int FUNC_2 (int ,int const*,unsigned int) ;
 int FUNC_3 (struct zd_usb*) ;
 int FUNC_4 (struct zd_usb*) ;

__attribute__((used)) static void FUNC_5(struct zd_usb *VAR_1, const u8 *VAR_2,
        unsigned int VAR_3)
{
 int VAR_4;
 const struct rx_length_info *VAR_5;

 if (VAR_3 < sizeof(struct rx_length_info)) {

  FUNC_0(FUNC_3(VAR_1), "invalid, small RX packet : %d\n",
        VAR_3);
  return;
 }
 VAR_5 = (struct rx_length_info *)
  (VAR_2 + VAR_3 - sizeof(struct rx_length_info));
 if (FUNC_1(&VAR_5->tag) == VAR_0)
 {
  unsigned int VAR_6, VAR_7, VAR_8;
  for (VAR_4 = 0, VAR_6 = 0;; VAR_4++) {
   VAR_7 = FUNC_1(&VAR_5->length[VAR_4]);
   if (VAR_7 == 0)
    return;
   VAR_8 = VAR_6+VAR_7;
   if (VAR_8 > VAR_3)
    return;
   FUNC_2(FUNC_4(VAR_1), VAR_2+VAR_6, VAR_7);
   if (VAR_4 >= 2)
    return;
   VAR_6 = (VAR_8+3) & ~3;
  }
 } else {
  FUNC_2(FUNC_4(VAR_1), VAR_2, VAR_3);
 }
}
