
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
typedef int dmacHw_TRANSACTION_WIDTH_e ;
struct TYPE_3__ {int srcGatherWidth; int dstScatterWidth; int maxDataPerBlock; int srcMaxTransactionWidth; int dstMaxTransactionWidth; } ;
typedef TYPE_1__ dmacHw_CONFIG_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;

int FUNC_3(dmacHw_CONFIG_t *VAR_1,
        void *VAR_2,
        void *VAR_3,
        size_t VAR_4
    ) {
 int VAR_5 = 0;
 int VAR_6 = 0;
 int VAR_7 = 0;
 int VAR_8 = 0;
 int VAR_9 = 0;
 uint32_t VAR_10 = VAR_0;
 dmacHw_TRANSACTION_WIDTH_e VAR_11;
 dmacHw_TRANSACTION_WIDTH_e VAR_12;

 VAR_8 = FUNC_2(VAR_1->dstMaxTransactionWidth);
 VAR_9 = FUNC_2(VAR_1->srcMaxTransactionWidth);


 if ((VAR_2 == ((void*)0)) || (VAR_3 == ((void*)0)) || (VAR_4 == 0)) {

  return -1;
 }


 if (VAR_1->srcGatherWidth % VAR_9
     || VAR_1->dstScatterWidth % VAR_8) {
  return -1;
 }
 VAR_11 = VAR_1->dstMaxTransactionWidth;
 while (FUNC_0(VAR_8) & (uint32_t) VAR_3) {
  VAR_11 = FUNC_1(VAR_11);
  VAR_8 = FUNC_2(VAR_11);
 }


 VAR_12 = VAR_1->srcMaxTransactionWidth;
 while (FUNC_0(VAR_9) & (uint32_t) VAR_2) {
  VAR_12 = FUNC_1(VAR_12);
  VAR_9 = FUNC_2(VAR_12);
 }


 if (VAR_1->maxDataPerBlock
     && ((VAR_1->maxDataPerBlock / VAR_9) <
  VAR_0)) {
  VAR_10 = VAR_1->maxDataPerBlock / VAR_9;
 }


 VAR_5 = VAR_4 / VAR_9;

 if (VAR_5 && (VAR_8 > VAR_9)) {
  VAR_6 = VAR_4 % VAR_8;

  VAR_5 = VAR_5 - (VAR_6 / VAR_9);
 } else {
  VAR_6 = VAR_4 % VAR_9;
 }

 if (VAR_6) {
  VAR_7++;
 }


 if (VAR_5) {
  VAR_7 += ((VAR_5 - 1) / VAR_10) + 1;
 }

 return VAR_7;
}
