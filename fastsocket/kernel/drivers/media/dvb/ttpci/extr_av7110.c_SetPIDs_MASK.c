
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_2__ {scalar_t__ bypass_mode; } ;
struct av7110 {TYPE_1__ audiostate; scalar_t__* pids; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct av7110*,int ,int ,int,int,int,int,int,int,int) ;
 int FUNC_1 (int,char*,struct av7110*) ;

__attribute__((used)) static inline int FUNC_2(struct av7110 *VAR_6, u16 VAR_7, u16 VAR_8, u16 VAR_9,
     u16 VAR_10, u16 VAR_11)
{
 u16 VAR_12 = 0;

 FUNC_1(4, "%p\n", VAR_6);

 if (VAR_7 == 0x1fff || VAR_8 == 0x1fff ||
     VAR_9 == 0x1fff || VAR_10 == 0x1fff || VAR_11 == 0x1fff) {
  VAR_7 = VAR_8 = VAR_9 = VAR_10 = VAR_11 = 0;
  VAR_6->pids[VAR_4] = 0;
  VAR_6->pids[VAR_1] = 0;
  VAR_6->pids[VAR_3] = 0;
  VAR_6->pids[VAR_2] = 0;
 }

 if (VAR_6->audiostate.bypass_mode)
  VAR_12 |= 0x8000;

 return FUNC_0(VAR_6, VAR_0, VAR_5, 6,
        VAR_11, VAR_7, VAR_8, VAR_9, VAR_10, VAR_12);
}
