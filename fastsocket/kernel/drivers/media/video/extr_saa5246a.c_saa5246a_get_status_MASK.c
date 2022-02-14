
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned char charset; int delete; int headline; int subtitle; int supp_header; int update; int inter_seq; int dis_disp; int serial; int notfound; int pblf; int hamming; int minute; int hour; int pagenum; } ;
typedef TYPE_1__ vtx_pageinfo_t ;
struct saa5246a_device {int* is_searching; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned char VAR_3 ;
 int VAR_4 ;
 unsigned char VAR_5 ;
 int VAR_6 ;
 unsigned char VAR_7 ;
 unsigned char VAR_8 ;
 unsigned char VAR_9 ;
 unsigned char VAR_10 ;
 unsigned char VAR_11 ;
 unsigned char VAR_12 ;
 unsigned char VAR_13 ;
 unsigned char VAR_14 ;
 unsigned char VAR_15 ;
 unsigned char VAR_16 ;
 unsigned char VAR_17 ;
 unsigned char VAR_18 ;
 int VAR_19 ;
 scalar_t__ FUNC_0 (struct saa5246a_device*,int,unsigned char*) ;
 scalar_t__ FUNC_1 (struct saa5246a_device*,int ,unsigned char,int ,int ,int ) ;
 int FUNC_2 (unsigned char*) ;
 int FUNC_3 (unsigned char*) ;
 int FUNC_4 (unsigned char*) ;

__attribute__((used)) static inline int FUNC_5(struct saa5246a_device *VAR_20,
    vtx_pageinfo_t *VAR_21, unsigned char VAR_22)
{
 unsigned char VAR_23[10];
 int VAR_24;

 if (VAR_22 >= VAR_3)
  return -VAR_1;

 if (FUNC_1(VAR_20, VAR_19,

  VAR_22 |
  VAR_5,

  VAR_6,

  VAR_4,

  VAR_0) ||
  FUNC_0(VAR_20, 10, VAR_23))
 {
  return -VAR_2;
 }

 VAR_21->pagenum = FUNC_4(VAR_23);
 VAR_21->hour = FUNC_2(VAR_23);
 VAR_21->minute = FUNC_3(VAR_23);
 VAR_21->charset = ((VAR_23[7] & VAR_15) >> 1);
 VAR_21->delete = !!(VAR_23[3] & VAR_8);
 VAR_21->headline = !!(VAR_23[5] & VAR_9);
 VAR_21->subtitle = !!(VAR_23[5] & VAR_10);
 VAR_21->supp_header = !!(VAR_23[6] & VAR_13);
 VAR_21->update = !!(VAR_23[6] & VAR_14);
 VAR_21->inter_seq = !!(VAR_23[6] & VAR_11);
 VAR_21->dis_disp = !!(VAR_23[6] & VAR_12);
 VAR_21->serial = !!(VAR_23[7] & VAR_16);
 VAR_21->notfound = !!(VAR_23[8] & VAR_17);
 VAR_21->pblf = !!(VAR_23[9] & VAR_18);
 VAR_21->hamming = 0;
 for (VAR_24 = 0; VAR_24 <= 7; VAR_24++) {
  if (VAR_23[VAR_24] & VAR_7) {
   VAR_21->hamming = 1;
   break;
  }
 }
 if (!VAR_21->hamming && !VAR_21->notfound)
  VAR_20->is_searching[VAR_22] = 0;
 return 0;
}
