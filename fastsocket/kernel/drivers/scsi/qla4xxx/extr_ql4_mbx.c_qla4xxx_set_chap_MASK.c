
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int uint16_t ;
struct scsi_qla_host {int chap_dma_pool; scalar_t__ chap_list; } ;
struct ql4_chap_table {int cookie; int name; int secret; int secret_len; int flags; } ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int ) ;
 struct ql4_chap_table* FUNC_1 (int ,int ,int *) ;
 int FUNC_2 (int ,struct ql4_chap_table*,int ) ;
 int FUNC_3 (struct ql4_chap_table*,struct ql4_chap_table*,int) ;
 int FUNC_4 (struct ql4_chap_table*,int ,int) ;
 int FUNC_5 (struct scsi_qla_host*,int ,int,int,int ) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (int ,char*,int ) ;

__attribute__((used)) static int FUNC_8(struct scsi_qla_host *VAR_12, char *VAR_13,
       char *VAR_14, uint16_t VAR_15, int VAR_16)
{
 int VAR_17 = 0;
 int VAR_18 = VAR_10;
 uint32_t VAR_19 = 0;
 struct ql4_chap_table *VAR_20;
 dma_addr_t VAR_21;

 VAR_20 = FUNC_1(VAR_12->chap_dma_pool, VAR_7, &VAR_21);
 if (VAR_20 == ((void*)0)) {
  VAR_17 = -VAR_4;
  goto exit_set_chap;
 }

 FUNC_4(VAR_20, 0, sizeof(struct ql4_chap_table));
 if (VAR_16)
  VAR_20->flags |= VAR_0;
 else
  VAR_20->flags |= VAR_1;
 VAR_20->secret_len = FUNC_6(VAR_14);
 FUNC_7(VAR_20->secret, VAR_14, VAR_9);
 FUNC_7(VAR_20->name, VAR_13, VAR_8);
 VAR_20->cookie = FUNC_0(VAR_2);
 VAR_19 = VAR_5 | (VAR_15 * sizeof(struct ql4_chap_table));
 VAR_18 = FUNC_5(VAR_12, VAR_21, VAR_19,
    sizeof(struct ql4_chap_table),
    VAR_6);

 if (VAR_18 == VAR_11 && VAR_12->chap_list) {

  FUNC_3((struct ql4_chap_table *)VAR_12->chap_list + VAR_15,
         VAR_20, sizeof(struct ql4_chap_table));
 }
 FUNC_2(VAR_12->chap_dma_pool, VAR_20, VAR_21);
 if (VAR_18 != VAR_11)
  VAR_17 = -VAR_3;

exit_set_chap:
 return VAR_17;
}
