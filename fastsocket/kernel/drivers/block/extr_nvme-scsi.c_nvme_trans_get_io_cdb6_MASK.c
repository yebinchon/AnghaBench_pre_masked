
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct nvme_trans_io_cdb {int lba; scalar_t__ xfer_len; scalar_t__ prot_info; scalar_t__ fua; } ;


 int FUNC_0 (int *,int ) ;
 scalar_t__ FUNC_1 (int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static inline void FUNC_2(u8 *VAR_4,
     struct nvme_trans_io_cdb *VAR_5)
{
 VAR_5->fua = 0;
 VAR_5->prot_info = 0;
 VAR_5->lba = FUNC_0(VAR_4, VAR_1) &
     VAR_0;
 VAR_5->xfer_len = FUNC_1(VAR_4, VAR_2);


 if (VAR_5->xfer_len == 0)
  VAR_5->xfer_len = VAR_3;
}
