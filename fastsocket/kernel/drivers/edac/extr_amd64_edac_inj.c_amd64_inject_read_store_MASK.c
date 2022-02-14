
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct mem_ctl_info {struct amd64_pvt* pvt_info; } ;
struct TYPE_2__ {int bit_map; int word; int section; } ;
struct amd64_pvt {int F3; TYPE_1__ injection; } ;
typedef size_t ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (char*,int,int) ;
 int FUNC_4 (char const*,int,unsigned long*) ;

__attribute__((used)) static ssize_t FUNC_5(struct mem_ctl_info *VAR_4,
     const char *VAR_5, size_t VAR_6)
{
 struct amd64_pvt *VAR_7 = VAR_4->pvt_info;
 unsigned long VAR_8;
 u32 VAR_9, VAR_10;
 int VAR_11 = 0;

 VAR_11 = FUNC_4(VAR_5, 10, &VAR_8);
 if (VAR_11 != -VAR_0) {


  VAR_9 = VAR_3 |
    FUNC_0(VAR_7->injection.section);
  FUNC_2(VAR_7->F3, VAR_1, VAR_9);

  VAR_10 = FUNC_1(VAR_7->injection.word,
      VAR_7->injection.bit_map);


  FUNC_2(VAR_7->F3, VAR_2, VAR_10);

  FUNC_3("section=0x%x word_bits=0x%x\n", VAR_9, VAR_10);

  return VAR_6;
 }
 return VAR_11;
}
