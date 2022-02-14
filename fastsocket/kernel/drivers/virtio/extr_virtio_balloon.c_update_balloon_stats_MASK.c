
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct virtio_balloon {int dummy; } ;
struct sysinfo {unsigned long freeram; unsigned long totalram; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (unsigned long*) ;
 unsigned long FUNC_1 (unsigned long) ;
 int FUNC_2 (struct sysinfo*) ;
 int FUNC_3 (struct virtio_balloon*,int ,int ,unsigned long) ;

__attribute__((used)) static void FUNC_4(struct virtio_balloon *VAR_11)
{
 unsigned long VAR_12[VAR_0];
 struct sysinfo VAR_13;
 int VAR_14 = 0;

 FUNC_0(VAR_12);
 FUNC_2(&VAR_13);

 FUNC_3(VAR_11, VAR_14++, VAR_9,
    FUNC_1(VAR_12[VAR_3]));
 FUNC_3(VAR_11, VAR_14++, VAR_10,
    FUNC_1(VAR_12[VAR_4]));
 FUNC_3(VAR_11, VAR_14++, VAR_5, VAR_12[VAR_2]);
 FUNC_3(VAR_11, VAR_14++, VAR_8, VAR_12[VAR_1]);
 FUNC_3(VAR_11, VAR_14++, VAR_6,
    FUNC_1(VAR_13.freeram));
 FUNC_3(VAR_11, VAR_14++, VAR_7,
    FUNC_1(VAR_13.totalram));
}
