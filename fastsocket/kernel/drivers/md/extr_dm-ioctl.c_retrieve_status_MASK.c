
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dm_target_spec {int next; int target_type; int length; int sector_start; scalar_t__ status; } ;
struct dm_target {TYPE_1__* type; int len; int begin; } ;
struct dm_table {int dummy; } ;
struct dm_ioctl {int flags; int data_start; size_t data_size; unsigned int target_count; } ;
typedef int status_type_t ;
struct TYPE_2__ {scalar_t__ (* status ) (struct dm_target*,int ,char*,size_t) ;scalar_t__ (* status_with_flags ) (struct dm_target*,int ,unsigned int,char*,size_t) ;int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 char* FUNC_0 (char*) ;
 unsigned int FUNC_1 (struct dm_table*) ;
 struct dm_target* FUNC_2 (struct dm_table*,unsigned int) ;
 scalar_t__ FUNC_3 (TYPE_1__*) ;
 char* FUNC_4 (struct dm_ioctl*,size_t,size_t*) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int ,int ,int) ;
 scalar_t__ FUNC_7 (struct dm_target*,int ,unsigned int,char*,size_t) ;
 scalar_t__ FUNC_8 (struct dm_target*,int ,char*,size_t) ;

__attribute__((used)) static void FUNC_9(struct dm_table *VAR_6,
       struct dm_ioctl *VAR_7, size_t VAR_8)
{
 unsigned int VAR_9, VAR_10;
 struct dm_target_spec *VAR_11;
 char *VAR_12, *VAR_13;
 status_type_t VAR_14;
 size_t VAR_15, VAR_16, VAR_17 = 0;
 unsigned VAR_18 = 0;

 VAR_13 = VAR_12 = FUNC_4(VAR_7, VAR_8, &VAR_16);

 if (VAR_7->flags & VAR_3)
  VAR_14 = VAR_5;
 else
  VAR_14 = VAR_4;


 VAR_10 = FUNC_1(VAR_6);
 for (VAR_9 = 0; VAR_9 < VAR_10; VAR_9++) {
  struct dm_target *VAR_19 = FUNC_2(VAR_6, VAR_9);
  size_t VAR_20;

  VAR_15 = VAR_16 - (VAR_13 - VAR_12);
  if (VAR_15 <= sizeof(struct dm_target_spec)) {
   VAR_7->flags |= VAR_0;
   break;
  }

  VAR_11 = (struct dm_target_spec *) VAR_13;

  VAR_11->status = 0;
  VAR_11->sector_start = VAR_19->begin;
  VAR_11->length = VAR_19->len;
  FUNC_6(VAR_11->target_type, VAR_19->type->name,
   sizeof(VAR_11->target_type));

  VAR_13 += sizeof(struct dm_target_spec);
  VAR_15 = VAR_16 - (VAR_13 - VAR_12);
  if (VAR_15 <= 0) {
   VAR_7->flags |= VAR_0;
   break;
  }


  if (FUNC_3(VAR_19->type) &&
      VAR_19->type->status_with_flags) {




   if (VAR_7->flags & VAR_1)
    VAR_18 |= VAR_2;
   if (VAR_19->type->status_with_flags(VAR_19, VAR_14, VAR_18,
       VAR_13, VAR_15)) {
    VAR_7->flags |= VAR_0;
    break;
   }
  } else if (VAR_19->type->status) {
   if (VAR_19->type->status(VAR_19, VAR_14, VAR_13, VAR_15)) {
    VAR_7->flags |= VAR_0;
    break;
   }
  } else
   VAR_13[0] = '\0';

  VAR_20 = FUNC_5(VAR_13) + 1;
  if (VAR_20 == VAR_15) {
   VAR_7->flags |= VAR_0;
   break;
  }

  VAR_13 += VAR_20;
  VAR_17 = VAR_7->data_start + (VAR_13 - VAR_12);

  VAR_13 = FUNC_0(VAR_13);
  VAR_11->next = VAR_13 - VAR_12;
 }

 if (VAR_17)
  VAR_7->data_size = VAR_17;

 VAR_7->target_count = VAR_10;
}
