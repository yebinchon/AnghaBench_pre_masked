
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct r3964_info {unsigned int rx_position; int flags; scalar_t__ bcc; scalar_t__ last_rx; scalar_t__ nRetry; void* state; int read_wait; struct r3964_client_info* firstClient; int rx_buf; int tmr; } ;
struct r3964_client_info {int sig_flags; struct r3964_client_info* next; } ;
struct r3964_block_header {unsigned int length; unsigned char* data; int * owner; int * next; scalar_t__ locks; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 void* VAR_12 ;
 int FUNC_0 (char*,struct r3964_block_header*) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (char*,unsigned int) ;
 int FUNC_3 (struct r3964_client_info*,int ,unsigned int,int ,struct r3964_block_header*) ;
 int FUNC_4 (struct r3964_info*,struct r3964_block_header*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct r3964_info*) ;
 scalar_t__ VAR_13 ;
 struct r3964_block_header* FUNC_7 (unsigned int,int ) ;
 int FUNC_8 (unsigned char*,int ,unsigned int) ;
 int FUNC_9 (int *,scalar_t__) ;
 int FUNC_10 (struct r3964_info*,int ) ;
 int FUNC_11 (struct r3964_info*) ;
 int FUNC_12 (int *) ;

__attribute__((used)) static void FUNC_13(struct r3964_info *VAR_14)
{
 unsigned int VAR_15;
 struct r3964_client_info *VAR_16;
 struct r3964_block_header *VAR_17;

 VAR_15 = VAR_14->rx_position;


 if (VAR_14->flags & VAR_3) {
  if (VAR_14->bcc != VAR_14->last_rx) {
   FUNC_1("checksum error - got %x but expected %x",
     VAR_14->last_rx, VAR_14->bcc);
   VAR_14->flags |= VAR_4;
  }
 }


 if (VAR_14->flags & VAR_5) {
  FUNC_1("on_receive_block - transmission failed error %x",
    VAR_14->flags & VAR_5);

  FUNC_10(VAR_14, VAR_2);
  FUNC_6(VAR_14);
  if (VAR_14->nRetry < VAR_7) {
   VAR_14->state = VAR_12;
   VAR_14->nRetry++;
   FUNC_9(&VAR_14->tmr, VAR_13 + VAR_11);
  } else {
   FUNC_1("on_receive_block - failed after max retries");
   VAR_14->state = VAR_6;
  }
  return;
 }


 FUNC_10(VAR_14, VAR_0);
 FUNC_6(VAR_14);
 FUNC_5(&VAR_14->tmr);
 FUNC_2(" rx success: got %d chars", VAR_15);


 VAR_17 = FUNC_7(VAR_15 + sizeof(struct r3964_block_header),
   VAR_1);
 FUNC_0("on_receive_block - kmalloc %p", VAR_17);

 if (VAR_17 == ((void*)0))
  return;

 VAR_17->length = VAR_15;
 VAR_17->data = ((unsigned char *)VAR_17) +
   sizeof(struct r3964_block_header);
 VAR_17->locks = 0;
 VAR_17->next = ((void*)0);
 VAR_17->owner = ((void*)0);

 FUNC_8(VAR_17->data, VAR_14->rx_buf, VAR_15);


 FUNC_4(VAR_14, VAR_17);


 for (VAR_16 = VAR_14->firstClient; VAR_16; VAR_16 = VAR_16->next) {
  if (VAR_16->sig_flags & VAR_10) {
   FUNC_3(VAR_16, VAR_8, VAR_15, VAR_9,
    VAR_17);
  }
 }
 FUNC_12(&VAR_14->read_wait);

 VAR_14->state = VAR_6;

 FUNC_11(VAR_14);
}
