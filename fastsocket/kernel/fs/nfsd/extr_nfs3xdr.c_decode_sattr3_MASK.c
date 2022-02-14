
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u64 ;
typedef int u32 ;
struct TYPE_4__ {void* tv_nsec; void* tv_sec; } ;
struct TYPE_3__ {void* tv_nsec; void* tv_sec; } ;
struct iattr {int ia_valid; TYPE_2__ ia_mtime; TYPE_1__ ia_atime; scalar_t__ ia_size; void* ia_gid; void* ia_uid; void* ia_mode; } ;
typedef int __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 void* FUNC_0 (int ) ;
 int * FUNC_1 (int *,scalar_t__*) ;

__attribute__((used)) static __be32 *
FUNC_2(__be32 *VAR_9, struct iattr *VAR_10)
{
 u32 VAR_11;

 VAR_10->ia_valid = 0;

 if (*VAR_9++) {
  VAR_10->ia_valid |= VAR_3;
  VAR_10->ia_mode = FUNC_0(*VAR_9++);
 }
 if (*VAR_9++) {
  VAR_10->ia_valid |= VAR_7;
  VAR_10->ia_uid = FUNC_0(*VAR_9++);
 }
 if (*VAR_9++) {
  VAR_10->ia_valid |= VAR_2;
  VAR_10->ia_gid = FUNC_0(*VAR_9++);
 }
 if (*VAR_9++) {
  u64 VAR_12;

  VAR_10->ia_valid |= VAR_6;
  VAR_9 = FUNC_1(VAR_9, &VAR_12);
  if (VAR_12 <= VAR_8)
   VAR_10->ia_size = VAR_12;
  else
   VAR_10->ia_size = VAR_8;
 }
 if ((VAR_11 = FUNC_0(*VAR_9++)) == 1) {
  VAR_10->ia_valid |= VAR_0;
 } else if (VAR_11 == 2) {
  VAR_10->ia_valid |= VAR_0 | VAR_1;
  VAR_10->ia_atime.tv_sec = FUNC_0(*VAR_9++);
  VAR_10->ia_atime.tv_nsec = FUNC_0(*VAR_9++);
 }
 if ((VAR_11 = FUNC_0(*VAR_9++)) == 1) {
  VAR_10->ia_valid |= VAR_4;
 } else if (VAR_11 == 2) {
  VAR_10->ia_valid |= VAR_4 | VAR_5;
  VAR_10->ia_mtime.tv_sec = FUNC_0(*VAR_9++);
  VAR_10->ia_mtime.tv_nsec = FUNC_0(*VAR_9++);
 }
 return VAR_9;
}
