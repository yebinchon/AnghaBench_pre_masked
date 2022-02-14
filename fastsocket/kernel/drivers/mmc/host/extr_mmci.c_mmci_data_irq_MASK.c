
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mmci_host {int sg_ptr; scalar_t__ sg_len; int data_xfered; } ;
struct mmc_data {int flags; int stop; int mrq; int error; scalar_t__ blksz; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct mmci_host*,int ) ;
 int FUNC_2 (struct mmci_host*,int ,int ) ;
 int FUNC_3 (struct mmci_host*) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void
FUNC_5(struct mmci_host *VAR_10, struct mmc_data *VAR_11,
       unsigned int VAR_12)
{
 if (VAR_12 & VAR_3) {
  VAR_10->data_xfered += VAR_11->blksz;
 }
 if (VAR_12 & (VAR_4|VAR_6|VAR_8|VAR_7)) {
  if (VAR_12 & VAR_4)
   VAR_11->error = -VAR_0;
  else if (VAR_12 & VAR_6)
   VAR_11->error = -VAR_2;
  else if (VAR_12 & (VAR_8|VAR_7))
   VAR_11->error = -VAR_1;
  VAR_12 |= VAR_5;





  if (VAR_10->sg_len && VAR_11->flags & VAR_9)
   FUNC_0(FUNC_4(VAR_10->sg_ptr));
 }
 if (VAR_12 & VAR_5) {
  FUNC_3(VAR_10);

  if (!VAR_11->stop) {
   FUNC_1(VAR_10, VAR_11->mrq);
  } else {
   FUNC_2(VAR_10, VAR_11->stop, 0);
  }
 }
}
