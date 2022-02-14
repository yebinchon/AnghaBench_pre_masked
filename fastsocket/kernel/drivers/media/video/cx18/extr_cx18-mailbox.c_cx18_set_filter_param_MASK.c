
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct cx18_stream {int handle; struct cx18* cx; } ;
struct cx18 {int filter_mode; scalar_t__ temporal_strength; scalar_t__ spatial_strength; } ;


 int VAR_0 ;
 int FUNC_0 (struct cx18*,int ,int,int ,int,int,scalar_t__) ;

__attribute__((used)) static int FUNC_1(struct cx18_stream *VAR_1)
{
 struct cx18 *VAR_2 = VAR_1->cx;
 u32 VAR_3;
 int VAR_4;

 VAR_3 = (VAR_2->filter_mode & 1) ? 2 : (VAR_2->spatial_strength ? 1 : 0);
 VAR_4 = FUNC_0(VAR_2, VAR_0, 4,
   VAR_1->handle, 1, VAR_3, VAR_2->spatial_strength);
 VAR_3 = (VAR_2->filter_mode & 2) ? 2 : (VAR_2->temporal_strength ? 1 : 0);
 VAR_4 = VAR_4 ? VAR_4 : FUNC_0(VAR_2, VAR_0, 4,
   VAR_1->handle, 0, VAR_3, VAR_2->temporal_strength);
 VAR_4 = VAR_4 ? VAR_4 : FUNC_0(VAR_2, VAR_0, 4,
   VAR_1->handle, 2, VAR_2->filter_mode >> 2, 0);
 return VAR_4;
}
