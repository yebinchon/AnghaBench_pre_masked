
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct dst_state {int type_flags; scalar_t__* rxbuffer; int dst_mutex; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int ,int ,int,char*,...) ;
 scalar_t__ FUNC_1 (scalar_t__*,int) ;
 scalar_t__ FUNC_2 (struct dst_state*) ;
 scalar_t__ FUNC_3 (struct dst_state*) ;
 scalar_t__ FUNC_4 (struct dst_state*) ;
 int FUNC_5 (struct dst_state*,int ) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (struct dst_state*,scalar_t__*,int ) ;
 int FUNC_10 (int) ;
 int VAR_10 ;
 scalar_t__ FUNC_11 (struct dst_state*,scalar_t__*,scalar_t__) ;

__attribute__((used)) static int FUNC_12(struct dst_state *VAR_11, u8 *VAR_12, u8 VAR_13)
{
 u8 VAR_14;

 FUNC_7(&VAR_11->dst_mutex);
 if ((FUNC_2(VAR_11)) < 0) {
  FUNC_0(VAR_10, VAR_4, 1, "DST Communication Initialization Failed.");
  goto error;
 }
 if (FUNC_11(VAR_11, VAR_12, VAR_13)) {
  FUNC_0(VAR_10, VAR_3, 1, "Trying to recover.. ");
  if ((FUNC_3(VAR_11)) < 0) {
   FUNC_0(VAR_10, VAR_2, 1, "Recovery Failed.");
   goto error;
  }
  goto error;
 }
 if ((FUNC_4(VAR_11)) < 0) {
  FUNC_0(VAR_10, VAR_2, 1, "PIO Disable Failed.");
  goto error;
 }
 if (VAR_11->type_flags & VAR_5)
  FUNC_6(3);
 if (FUNC_9(VAR_11, &VAR_14, VAR_8)) {
  FUNC_0(VAR_10, VAR_1, 1, "Trying to recover.. ");
  if ((FUNC_3(VAR_11)) < 0) {
   FUNC_0(VAR_10, VAR_3, 1, "Recovery Failed.");
   goto error;
  }
  goto error;
 }
 if (VAR_14 != VAR_0) {
  FUNC_0(VAR_10, VAR_3, 1, "write not acknowledged 0x%02x ", VAR_14);
  goto error;
 }
 if (VAR_13 >= 2 && VAR_12[0] == 0 && (VAR_12[1] == 1 || VAR_12[1] == 3))
  goto error;
 if (VAR_11->type_flags & VAR_5)
  FUNC_6(3);
 else
  FUNC_10(2000);
 if (!FUNC_5(VAR_11, VAR_9))
  goto error;
 if (FUNC_9(VAR_11, VAR_11->rxbuffer, VAR_7)) {
  FUNC_0(VAR_10, VAR_1, 1, "Trying to recover.. ");
  if ((FUNC_3(VAR_11)) < 0) {
   FUNC_0(VAR_10, VAR_3, 1, "Recovery failed.");
   goto error;
  }
  goto error;
 }
 if (VAR_11->rxbuffer[7] != FUNC_1(VAR_11->rxbuffer, 7)) {
  FUNC_0(VAR_10, VAR_3, 1, "checksum failure");
  goto error;
 }
 FUNC_8(&VAR_11->dst_mutex);
 return 0;

error:
 FUNC_8(&VAR_11->dst_mutex);
 return -VAR_6;

}
