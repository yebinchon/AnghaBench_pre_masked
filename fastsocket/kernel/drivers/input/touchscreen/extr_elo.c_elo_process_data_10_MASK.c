
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct input_dev {int dummy; } ;
struct elo {unsigned char* data; size_t idx; int csum; unsigned char expected_packet; int response; int cmd_done; struct input_dev* dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned char VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 unsigned char VAR_9 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct input_dev*,int ,int) ;
 int FUNC_2 (struct input_dev*,int ,int) ;
 int FUNC_3 (struct input_dev*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ,int*,int ) ;
 int FUNC_6 (char*,unsigned char,...) ;

__attribute__((used)) static void FUNC_7(struct elo *VAR_10, unsigned char VAR_11)
{
 struct input_dev *VAR_12 = VAR_10->dev;

 VAR_10->data[VAR_10->idx] = VAR_11;
 switch (VAR_10->idx++) {
  case 0:
   VAR_10->csum = 0xaa;
   if (VAR_11 != VAR_5) {
    FUNC_6("elo: unsynchronized data: 0x%02x\n", VAR_11);
    VAR_10->idx = 0;
   }
   break;

  case 9:
   VAR_10->idx = 0;
   if (VAR_11 != VAR_10->csum) {
    FUNC_6("elo: bad checksum: 0x%02x, expected 0x%02x\n",
      VAR_11, VAR_10->csum);
    break;
   }
   if (VAR_10->data[1] != VAR_10->expected_packet) {
    if (VAR_10->data[1] != VAR_9)
     FUNC_6("elo: unexpected packet: 0x%02x\n",
       VAR_10->data[1]);
    break;
   }
   if (FUNC_4(VAR_10->data[1] == VAR_9)) {
    FUNC_1(VAR_12, VAR_1, (VAR_10->data[4] << 8) | VAR_10->data[3]);
    FUNC_1(VAR_12, VAR_2, (VAR_10->data[6] << 8) | VAR_10->data[5]);
    if (VAR_10->data[2] & VAR_7)
     FUNC_1(VAR_12, VAR_0,
       (VAR_10->data[8] << 8) | VAR_10->data[7]);
    FUNC_2(VAR_12, VAR_3, VAR_10->data[2] & VAR_8);
    FUNC_3(VAR_12);
   } else if (VAR_10->data[1] == VAR_4) {
    if (VAR_10->data[2] == '0')
     VAR_10->expected_packet = VAR_9;
    FUNC_0(&VAR_10->cmd_done);
   } else {
    FUNC_5(VAR_10->response, &VAR_10->data[1], VAR_6);
    VAR_10->expected_packet = VAR_4;
   }
   break;
 }
 VAR_10->csum += VAR_11;
}
