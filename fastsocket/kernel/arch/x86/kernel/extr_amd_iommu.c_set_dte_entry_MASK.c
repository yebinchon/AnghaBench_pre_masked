
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef size_t u16 ;
struct protection_domain {int mode; int id; int pt_root; } ;
struct TYPE_2__ {int * data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_1__* VAR_6 ;
 struct protection_domain** VAR_7 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(u16 VAR_8, struct protection_domain *VAR_9)
{
 u64 VAR_10 = FUNC_2(VAR_9->pt_root);

 VAR_10 |= (VAR_9->mode & VAR_0)
      << VAR_1;
 VAR_10 |= VAR_2 | VAR_3 | VAR_4 | VAR_5;

 VAR_6[VAR_8].data[2] = VAR_9->id;
 VAR_6[VAR_8].data[1] = FUNC_1(VAR_10);
 VAR_6[VAR_8].data[0] = FUNC_0(VAR_10);

 VAR_7[VAR_8] = VAR_9;
}
