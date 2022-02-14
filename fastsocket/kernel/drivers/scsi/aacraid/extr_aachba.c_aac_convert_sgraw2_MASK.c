
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct sge_ieee1212 {int length; scalar_t__ addrLow; scalar_t__ flags; int addrHigh; } ;
struct aac_raw_io2 {int sgeNominalSize; int flags; int sgeCnt; struct sge_ieee1212* sge; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct sge_ieee1212*) ;
 struct sge_ieee1212* FUNC_3 (int,int ) ;
 int FUNC_4 (struct sge_ieee1212*,struct sge_ieee1212*,int) ;

__attribute__((used)) static int FUNC_5(struct aac_raw_io2 *VAR_4, int VAR_5, int VAR_6, int VAR_7)
{
 struct sge_ieee1212 *VAR_8;
 int VAR_9, VAR_10, VAR_11;
 u32 VAR_12;

 if (VAR_3 == 0)
  return 0;

 VAR_8 = FUNC_3(VAR_7 * sizeof(struct sge_ieee1212), VAR_0);
 if (VAR_8 == ((void*)0))
  return -1;

 for (VAR_9 = 1, VAR_11 = 1; VAR_9 < VAR_6-1; ++VAR_9) {
  for (VAR_10 = 0; VAR_10 < VAR_4->sge[VAR_9].length / (VAR_5 * VAR_1); ++VAR_10) {
   VAR_12 = VAR_4->sge[VAR_9].addrLow + VAR_10 * VAR_5 * VAR_1;
   VAR_8[VAR_11].addrLow = VAR_12;
   VAR_8[VAR_11].addrHigh = VAR_4->sge[VAR_9].addrHigh;
   if (VAR_12 < VAR_4->sge[VAR_9].addrLow)
    VAR_8[VAR_11].addrHigh++;
   VAR_8[VAR_11].length = VAR_5 * VAR_1;
   VAR_8[VAR_11].flags = 0;
   VAR_11++;
  }
 }
 VAR_8[VAR_11] = VAR_4->sge[VAR_6-1];
 FUNC_4(&VAR_4->sge[1], &VAR_8[1], (VAR_7-1)*sizeof(struct sge_ieee1212));

 FUNC_2(VAR_8);
 VAR_4->sgeCnt = FUNC_1(VAR_7);
 VAR_4->flags |= FUNC_0(VAR_2);
 VAR_4->sgeNominalSize = VAR_5 * VAR_1;
 return 0;
}
