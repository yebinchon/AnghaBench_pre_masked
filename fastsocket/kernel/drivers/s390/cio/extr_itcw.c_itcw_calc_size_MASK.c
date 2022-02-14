
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tsb {int dummy; } ;
struct tidaw {int dummy; } ;
struct tcw {int dummy; } ;
struct itcw {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;

size_t FUNC_0(int VAR_2, int VAR_3, int VAR_4)
{
 size_t VAR_5;
 int VAR_6;


 VAR_5 = sizeof(struct itcw);
 VAR_5 += sizeof(struct tcw) + VAR_1 +
                  sizeof(struct tsb) +
                    VAR_3 * sizeof(struct tidaw);

 if (VAR_2) {
  VAR_5 += sizeof(struct tcw) + VAR_1 +
                   sizeof(struct tsb) +
                     VAR_4 * sizeof(struct tidaw);
 }


 VAR_5 += 63 + 7;
 if (VAR_3) {
  VAR_6 = 1 + ((VAR_3 * sizeof(struct tidaw) - 1)
       >> VAR_0);
  VAR_5 += VAR_6 * sizeof(struct tidaw);
 }
 if (VAR_4) {
  VAR_6 = 1 + ((VAR_4 * sizeof(struct tidaw) - 1)
       >> VAR_0);
  VAR_5 += VAR_6 * sizeof(struct tidaw);
 }
 return VAR_5;
}
