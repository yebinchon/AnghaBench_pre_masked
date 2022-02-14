
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct cper_record_header {int record_length; } ;
typedef int ssize_t ;
struct TYPE_2__ {struct cper_record_header* vaddr; } ;


 int FUNC_0 (int,int*) ;
 TYPE_1__ VAR_0 ;
 int FUNC_1 (struct cper_record_header*,struct cper_record_header*,int) ;

__attribute__((used)) static ssize_t FUNC_2(u64 VAR_1, struct cper_record_header *VAR_2,
      size_t VAR_3)
{
 int VAR_4;
 u64 VAR_5, VAR_6 = 0;
 struct cper_record_header *VAR_7;

 VAR_4 = FUNC_0(VAR_1, &VAR_5);
 if (VAR_4)
  return VAR_4;
 VAR_7 = VAR_0.vaddr + VAR_5;
 VAR_6 = VAR_7->record_length;
 if (VAR_6 <= VAR_3)
  FUNC_1(VAR_2, VAR_7, VAR_6);

 return VAR_6;
}
